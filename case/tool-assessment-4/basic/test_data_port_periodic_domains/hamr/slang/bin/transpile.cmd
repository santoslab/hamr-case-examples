::#! 2> /dev/null                                   #
@ 2>/dev/null # 2>nul & echo off & goto BOF         #
if [ -z ${SIREUM_HOME} ]; then                      #
  echo "Please set SIREUM_HOME env var"             #
  exit -1                                           #
fi                                                  #
exec ${SIREUM_HOME}/bin/sireum slang run "$0" "$@"  #
:BOF
setlocal
if not defined SIREUM_HOME (
  echo Please set SIREUM_HOME env var
  exit /B -1
)
%SIREUM_HOME%\\bin\\sireum.bat slang run "%0" %*
exit /B %errorlevel%
::!#
// #Sireum

import org.sireum._

// This file was auto-generated.  Do not edit

val SCRIPT_HOME: Os.Path = Os.slashDir
val PATH_SEP: String = Os.pathSep

var project: ISZ[String] = Cli(Os.pathSepChar).parseTranspile(Os.cliArgs, 0) match {
  case Some(o: Cli.TranspileOption) =>
    if(o.legacy) {
      println("Using Legacy Scheduler")

      val main: ISZ[String] = ISZ(
        "--sourcepath", s"${SCRIPT_HOME}/../src/main",
        "--output-dir", s"${SCRIPT_HOME}/../../c/nix",
        "--name", "main",
        "--apps", "base.producer_thread_i_producer_producer_App,base.consumer_thread_i_consumer_consumer_App,base.LegacyDemo",
        "--fingerprint", "3",
        "--bits", "32",
        "--string-size", "256",
        "--sequence-size", "5",
        "--sequence", s"IS[Z,art.Bridge]=2;MS[Z,Option[art.Bridge]]=2;IS[Z,art.UPort]=1;IS[Z,art.UConnection]=1;IS[Z,B]=8",
        "--constants", s"art.Art.maxComponents=2;art.Art.maxPorts=5",
        "--forward", "art.ArtNative=base.ArtNix,base.Platform=base.PlatformNix",
        "--stack-size", "16*1024*1024",
        "--stable-type-id",
        "--exts", s"${SCRIPT_HOME}/../../c/ext-c${PATH_SEP}${SCRIPT_HOME}/../../c/etc",
        "--exclude-build", "base.test_data_port_periodic_domains.producer_thread_i_producer_producer,base.test_data_port_periodic_domains.consumer_thread_i_consumer_consumer",
        "--verbose")
      main
    } else {
      val main: ISZ[String] = ISZ(
        "--sourcepath", s"${SCRIPT_HOME}/../src/main",
        "--output-dir", s"${SCRIPT_HOME}/../../c/nix",
        "--name", "main",
        "--apps", "base.Demo",
        "--fingerprint", "3",
        "--bits", "32",
        "--string-size", "256",
        "--sequence-size", "5",
        "--sequence", s"IS[Z,art.Bridge]=2;MS[Z,Option[art.Bridge]]=2;IS[Z,art.UPort]=1;IS[Z,art.UConnection]=1;IS[Z,B]=8",
        "--constants", s"art.Art.maxComponents=2;art.Art.maxPorts=5",
        "--forward", "art.ArtNative=art.ArtNativeSlang",
        "--stack-size", "16*1024*1024",
        "--stable-type-id",
        "--exts", s"${SCRIPT_HOME}/../../c/ext-schedule${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c${PATH_SEP}${SCRIPT_HOME}/../../c/etc",
        "--exclude-build", "base.test_data_port_periodic_domains.producer_thread_i_producer_producer,base.test_data_port_periodic_domains.consumer_thread_i_consumer_consumer",
        "--verbose")
      main
    }
  case Some(o: Cli.HelpOption) =>
    Os.exit(0);
    halt("")
  case _ =>
    eprintln("Could not recognize arguments")
    Os.exit(-1)
    halt("")
}

println("Initializing runtime library ...")
Sireum.initRuntimeLibrary()

Sireum.run(ISZ[String]("slang", "transpilers", "c") ++ project)

import org.sireum._

object Cli {

  @datatype trait TranspileTopOption

  @datatype class HelpOption extends TranspileTopOption

  @datatype class TranspileOption(
    val help: String,
    val args: ISZ[String],
    val legacy: B
  ) extends TranspileTopOption
}

import Cli._

@record class Cli(val pathSep: C) {

  def parseTranspile(args: ISZ[String], i: Z): Option[TranspileTopOption] = {
    val help =
      st"""Transpile Slang Embedded Program
          |
          |Usage: <option>*
          |
          |Available Options:
          |-l, --legacy             Use legacy scheduler
          |-h, --help               Display this information""".render

    var legacy: B = false
    var j = i
    var isOption = T
    while (j < args.size && isOption) {
      val arg = args(j)
      if (ops.StringOps(arg).first == '-') {
        if (args(j) == "-h" || args(j) == "--help") {
          println(help)
          return Some(HelpOption())
        } else if (arg == "-l" || arg == "--legacy") {
           val o: Option[B] = { j = j - 1; Some(!legacy) }
           o match {
             case Some(v) => legacy = v
             case _ => return None()
           }
         } else {
          eprintln(s"Unrecognized option '$arg'.")
          return None()
        }
        j = j + 2
      } else {
        isOption = F
      }
    }
    return Some(TranspileOption(help, parseArguments(args, j), legacy))
  }

  def parseArguments(args: ISZ[String], i: Z): ISZ[String] = {
    var r = ISZ[String]()
    var j = i
    while (j < args.size) {
      r = r :+ args(j)
      j = j + 1
    }
    return r
  }

  def parsePaths(args: ISZ[String], i: Z): Option[ISZ[String]] = {
    return tokenize(args, i, "path", pathSep, F)
  }

  def parsePath(args: ISZ[String], i: Z): Option[Option[String]] = {
    if (i >= args.size) {
      eprintln("Expecting a path, but none found.")
    }
    return Some(Some(args(i)))
  }

  def parseStrings(args: ISZ[String], i: Z, sep: C): Option[ISZ[String]] = {
    tokenize(args, i, "string", sep, F) match {
      case r@Some(_) => return r
      case _ => return None()
    }
  }

  def parseString(args: ISZ[String], i: Z): Option[Option[String]] = {
    if (i >= args.size) {
      eprintln("Expecting a string, but none found.")
      return None()
    }
    return Some(Some(args(i)))
  }

  def parseNums(args: ISZ[String], i: Z, sep: C, minOpt: Option[Z], maxOpt: Option[Z]): Option[ISZ[Z]] = {
    tokenize(args, i, "integer", sep, T) match {
      case Some(sargs) =>
        var r = ISZ[Z]()
        for (arg <- sargs) {
          parseNumH(arg, minOpt, maxOpt) match {
            case Some(n) => r = r :+ n
            case _ => return None()
          }
        }
        return Some(r)
      case _ => return None()
    }
  }

  def tokenize(args: ISZ[String], i: Z, tpe: String, sep: C, removeWhitespace: B): Option[ISZ[String]] = {
    if (i >= args.size) {
      eprintln(s"Expecting a sequence of $tpe separated by '$sep', but none found.")
      return None()
    }
    val arg = args(i)
    return Some(tokenizeH(arg, sep, removeWhitespace))
  }

  def tokenizeH(arg: String, sep: C, removeWhitespace: B): ISZ[String] = {
    val argCis = conversions.String.toCis(arg)
    var r = ISZ[String]()
    var cis = ISZ[C]()
    var j = 0
    while (j < argCis.size) {
      val c = argCis(j)
      if (c == sep) {
        r = r :+ conversions.String.fromCis(cis)
        cis = ISZ[C]()
      } else {
        val allowed: B = c match {
          case c"\n" => !removeWhitespace
          case c" " => !removeWhitespace
          case c"\r" => !removeWhitespace
          case c"\t" => !removeWhitespace
          case _ => T
        }
        if (allowed) {
          cis = cis :+ c
        }
      }
      j = j + 1
    }
    if (cis.size > 0) {
      r = r :+ conversions.String.fromCis(cis)
    }
    return r
  }

  def parseNumChoice(args: ISZ[String], i: Z, choices: ISZ[Z]): Option[Z] = {
    val set = HashSet.empty[Z] ++ choices
    parseNum(args, i, None(), None()) match {
      case r@Some(n) =>
        if (set.contains(n)) {
          return r
        } else {
          eprintln(s"Expecting one of the following: $set, but found $n.")
          return None()
        }
      case r => return r
    }
  }

  def parseNum(args: ISZ[String], i: Z, minOpt: Option[Z], maxOpt: Option[Z]): Option[Z] = {
    if (i >= args.size) {
      eprintln(s"Expecting an integer, but none found.")
      return None()
    }
    return parseNumH(args(i), minOpt, maxOpt)
  }

  def parseNumH(arg: String, minOpt: Option[Z], maxOpt: Option[Z]): Option[Z] = {
    Z(arg) match {
      case Some(n) =>
        minOpt match {
          case Some(min) =>
            if (n < min) {
              eprintln(s"Expecting an integer at least $min, but found $n.")
              return None()
            }
          case _ =>
        }
        maxOpt match {
          case Some(max) =>
            if (n > max) {
              eprintln(s"Expecting an integer at most $max, but found $n.")
              return None()
            }
            return Some(n)
          case _ =>
        }
        return Some(n)
      case _ =>
        eprintln(s"Expecting an integer, but found '$arg'.")
        return None()
    }
  }

  def select(mode: String, args: ISZ[String], i: Z, choices: ISZ[String]): Option[String] = {
    val arg = args(i)
    var cs = ISZ[String]()
    for (c <- choices) {
      if (ops.StringOps(c).startsWith(arg)) {
        cs = cs :+ c
      }
    }
    cs.size match {
      case z"0" =>
        eprintln(s"$arg is not a mode of $mode.")
        return None()
      case z"1" => return Some(cs(0))
      case _ =>
        eprintln(
          st"""Which one of the following modes did you mean by '$arg'?
              |${(cs, "\n")}""".render)
        return None()
    }
  }
}
// @formatter:on

// BEGIN USER CODE

// END USER CODE

