// #Sireum

// This file was auto-generated.  Do not edit

package sender_vm.emitter_t_impl_src_process_src_thread

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import sender_vm._
import sender_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_seL4Nix

object src_thread extends App {

  val src_threadBridge : sender_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge = {
    val write_port = Port[Base_Types.Integer_8] (id = 0, name = "top_impl_Instance_src_process_src_thread_write_port", mode = EventOut)

    sender_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge(
      id = 0,
      name = "top_impl_Instance_src_process_src_thread",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      write_port = write_port
    )
  }

  val entryPoints: Bridge.EntryPoints = src_threadBridge.entryPoints
  val noData: Option[DataContent] = None()

  // write_port: Out EventDataPort Base_Types.Integer_8
  val write_port_id: Art.PortId = src_threadBridge.write_port.id
  var write_port_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    halt(s"Unexpected: src_thread.getValue called with: ${portId}")
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params


  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == write_port_id) {
      write_port_port = Some(data)
    } else {
      halt(s"Unexpected: src_thread.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(write_port_port.nonEmpty) {
      emitter_t_impl_src_process_src_thread_seL4Nix.write_port_Send(write_port_port.get)
      write_port_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    // nothing to do - CAmkES is responsible for initialization
  }

  def initialiseEntryPoint(): Unit = { entryPoints.initialise() }

  def computeEntryPoint(): Unit = { entryPoints.compute() }

  def finaliseEntryPoint(): Unit = { entryPoints.finalise() }

  def main(args: ISZ[String]): Z = {

    // need to touch the following for transpiler
    initialiseArchitecture()
    initialiseEntryPoint()
    computeEntryPoint()
    finaliseEntryPoint()

    touch()

    return 0
  }

  def touch(): Unit = {
    if(F) {
      TranspilerToucher.touch()

      // add types used in Platform.receive and Platform.receiveAsync
      val mbox2Boolean_Payload: MBox2[Art.PortId, DataContent] = MBox2(0, Base_Types.Boolean_Payload(T))
      val mbox2OptionDataContent: MBox2[Art.PortId, Option[DataContent]] = MBox2(0, None())

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Integer_8_Payload(Base_Types.Integer_8_example()))
      printDataContent(art.Empty())

      sender_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_initialization_api.get.logInfo("")
      sender_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_initialization_api.get.logDebug("")
      sender_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_initialization_api.get.logError("")
      sender_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_operational_api.get.logInfo("")
      sender_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_operational_api.get.logDebug("")
      sender_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_operational_api.get.logError("")
      sender_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_initialization_api.get.put_write_port(Base_Types.Integer_8_example())
      sender_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_operational_api.get.put_write_port(Base_Types.Integer_8_example())
    }
  }

  def logInfo(title: String, msg: String): Unit = {
    print(src_threadBridge.name)
    print(": ")
    println(msg)
  }

  def logError(title: String, msg: String): Unit = {
    eprint(src_threadBridge.name)
    eprint(": ")
    eprintln(msg)
  }

  def logDebug(title: String, msg: String): Unit = {
    print(src_threadBridge.name)
    print(": ")
    println(msg)
  }

  def run(): Unit = {}

}
