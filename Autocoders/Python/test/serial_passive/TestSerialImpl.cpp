// ======================================================================
// \title  TestSerialImpl.cpp
// \author tim
// \brief  cpp file for TestSerial component implementation class
//
// \copyright
// Copyright 2009-2015, by the California Institute of Technology.
// ALL RIGHTS RESERVED.  United States Government Sponsorship
// acknowledged. Any commercial use must be negotiated with the Office
// of Technology Transfer at the California Institute of Technology.
//
// This software may be subject to U.S. export control laws and
// regulations.  By accepting this document, the user agrees to comply
// with all U.S. export laws and regulations.  User has the
// responsibility to obtain export licenses, or other export authority
// as may be required before exporting such information to foreign
// countries or providing access to foreign persons.
// ======================================================================


#include <Autocoders/Python/test/serial_passive/TestSerialImpl.hpp>
#include "Fw/Types/BasicTypes.hpp"

namespace TestComponents {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction
  // ----------------------------------------------------------------------

  TestSerialImpl ::
#if FW_OBJECT_NAMES == 1
    TestSerialImpl(
        const char *const compName
    ) :
      TestSerialComponentBase(compName)
#else
    TestSerialImpl(void)
#endif
  {

  }

  void TestSerialImpl ::
    init(
        const NATIVE_INT_TYPE queueDepth,
        const NATIVE_INT_TYPE msgSize,
        const NATIVE_INT_TYPE instance
    )
  {
    TestSerialComponentBase::init(queueDepth, msgSize, instance);
  }

  TestSerialImpl ::
    ~TestSerialImpl(void)
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for user-defined serial input ports
  // ----------------------------------------------------------------------

  void TestSerialImpl ::
    SerialInSync_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::SerializeBufferBase &Buffer //!< The serialization buffer
    )
  {
    this->SerialOut_out(0,Buffer);
  }

  void TestSerialImpl ::
    SerialInGuarded_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::SerializeBufferBase &Buffer //!< The serialization buffer
    )
  {
      this->SerialOut_out(0,Buffer);
  }

  void TestSerialImpl ::
    SerialInAsync_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::SerializeBufferBase &Buffer //!< The serialization buffer
    )
  {
      this->SerialOut_out(0,Buffer);
  }

} // end namespace TestComponents
