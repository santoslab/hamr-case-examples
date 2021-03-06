// #Sireum

// This file was auto-generated.  Do not edit

package attestation_gate.RadioDriver_thr_Impl_radio_RadioDriver

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import attestation_gate._
import attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_seL4Nix

object RadioDriver extends App {

  val RadioDriverBridge : attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge = {
    val trusted_ids_out = Port[Base_Types.Bits] (id = 0, name = "top_Impl_Instance_radio_RadioDriver_trusted_ids_out", mode = DataOut)
    val automation_request_out = Port[Base_Types.Bits] (id = 1, name = "top_Impl_Instance_radio_RadioDriver_automation_request_out", mode = EventOut)
    val operating_region_out = Port[Base_Types.Bits] (id = 2, name = "top_Impl_Instance_radio_RadioDriver_operating_region_out", mode = EventOut)
    val line_search_task_out = Port[Base_Types.Bits] (id = 3, name = "top_Impl_Instance_radio_RadioDriver_line_search_task_out", mode = EventOut)

    attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge(
      id = 0,
      name = "top_Impl_Instance_radio_RadioDriver",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      trusted_ids_out = trusted_ids_out,
      automation_request_out = automation_request_out,
      operating_region_out = operating_region_out,
      line_search_task_out = line_search_task_out
    )
  }

  val entryPoints: Bridge.EntryPoints = RadioDriverBridge.entryPoints
  val noData: Option[DataContent] = None()

  // trusted_ids_out: Out DataPort Base_Types.Bits
  val trusted_ids_out_id: Art.PortId = RadioDriverBridge.trusted_ids_out.id
  var trusted_ids_out_port: Option[DataContent] = noData

  // automation_request_out: Out EventDataPort Base_Types.Bits
  val automation_request_out_id: Art.PortId = RadioDriverBridge.automation_request_out.id
  var automation_request_out_port: Option[DataContent] = noData

  // operating_region_out: Out EventDataPort Base_Types.Bits
  val operating_region_out_id: Art.PortId = RadioDriverBridge.operating_region_out.id
  var operating_region_out_port: Option[DataContent] = noData

  // line_search_task_out: Out EventDataPort Base_Types.Bits
  val line_search_task_out_id: Art.PortId = RadioDriverBridge.line_search_task_out.id
  var line_search_task_out_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    halt(s"Unexpected: RadioDriver.getValue called with: ${portId}")
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params


  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == trusted_ids_out_id) {
      trusted_ids_out_port = Some(data)
    } else if(portId == automation_request_out_id) {
      automation_request_out_port = Some(data)
    } else if(portId == operating_region_out_id) {
      operating_region_out_port = Some(data)
    } else if(portId == line_search_task_out_id) {
      line_search_task_out_port = Some(data)
    } else {
      halt(s"Unexpected: RadioDriver.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(trusted_ids_out_port.nonEmpty) {
      RadioDriver_thr_Impl_radio_RadioDriver_seL4Nix.trusted_ids_out_Send(trusted_ids_out_port.get)
      trusted_ids_out_port = noData
    }

    if(automation_request_out_port.nonEmpty) {
      RadioDriver_thr_Impl_radio_RadioDriver_seL4Nix.automation_request_out_Send(automation_request_out_port.get)
      automation_request_out_port = noData
    }

    if(operating_region_out_port.nonEmpty) {
      RadioDriver_thr_Impl_radio_RadioDriver_seL4Nix.operating_region_out_Send(operating_region_out_port.get)
      operating_region_out_port = noData
    }

    if(line_search_task_out_port.nonEmpty) {
      RadioDriver_thr_Impl_radio_RadioDriver_seL4Nix.line_search_task_out_Send(line_search_task_out_port.get)
      line_search_task_out_port = noData
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

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_example()))
      printDataContent(art.Empty())

      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_initialization_api.get.logInfo("")
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_initialization_api.get.logDebug("")
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_initialization_api.get.logError("")
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_operational_api.get.logInfo("")
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_operational_api.get.logDebug("")
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_operational_api.get.logError("")
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_initialization_api.get.put_trusted_ids_out(Base_Types.Bits_example())
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_operational_api.get.put_trusted_ids_out(Base_Types.Bits_example())
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_initialization_api.get.put_automation_request_out(Base_Types.Bits_example())
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_operational_api.get.put_automation_request_out(Base_Types.Bits_example())
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_initialization_api.get.put_operating_region_out(Base_Types.Bits_example())
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_operational_api.get.put_operating_region_out(Base_Types.Bits_example())
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_initialization_api.get.put_line_search_task_out(Base_Types.Bits_example())
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_operational_api.get.put_line_search_task_out(Base_Types.Bits_example())
    }
  }

  def logInfo(title: String, msg: String): Unit = {
    print(RadioDriverBridge.name)
    print(": ")
    println(msg)
  }

  def logError(title: String, msg: String): Unit = {
    eprint(RadioDriverBridge.name)
    eprint(": ")
    eprintln(msg)
  }

  def logDebug(title: String, msg: String): Unit = {
    print(RadioDriverBridge.name)
    print(": ")
    println(msg)
  }

  def run(): Unit = {}

}
