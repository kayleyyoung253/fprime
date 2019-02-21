// ======================================================================
// \title  TestEvent/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for TestEvent component Google Test harness base class
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

#include "GTestBase.hpp"

namespace Tlm {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  TestEventGTestBase ::
    TestEventGTestBase(
#if FW_OBJECT_NAMES == 1
        const char *const compName,
        const U32 maxHistorySize
#else
        const U32 maxHistorySize
#endif
    ) :
        TestEventTesterBase (
#if FW_OBJECT_NAMES == 1
            compName,
#endif
            maxHistorySize
        )
  {

  }

  TestEventGTestBase ::
    ~TestEventGTestBase(void)
  {

  }

  // ----------------------------------------------------------------------
  // Events
  // ----------------------------------------------------------------------

  void TestEventGTestBase ::
    assertEvents_size(
        const char *const __ISF_callSiteFileName,
        const U32 __ISF_callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventsSize)
      << "\n"
      << "  File:     " << __ISF_callSiteFileName << "\n"
      << "  Line:     " << __ISF_callSiteLineNumber << "\n"
      << "  Value:    Total size of all event histories\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventsSize << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: SomeEvent
  // ----------------------------------------------------------------------

  void TestEventGTestBase ::
    assertEvents_SomeEvent_size(
        const char *const __ISF_callSiteFileName,
        const U32 __ISF_callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_SomeEvent->size())
      << "\n"
      << "  File:     " << __ISF_callSiteFileName << "\n"
      << "  Line:     " << __ISF_callSiteLineNumber << "\n"
      << "  Value:    Size of history for event SomeEvent\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_SomeEvent->size() << "\n";
  }

  void TestEventGTestBase ::
    assertEvents_SomeEvent(
        const char *const __ISF_callSiteFileName,
        const U32 __ISF_callSiteLineNumber,
        const U32 index,
        const U32 arg1
    ) const
  {
    ASSERT_GT(this->eventHistory_SomeEvent->size(), index)
      << "\n"
      << "  File:     " << __ISF_callSiteFileName << "\n"
      << "  Line:     " << __ISF_callSiteLineNumber << "\n"
      << "  Value:    Index into history of event SomeEvent\n"
      << "  Expected: Less than size of history ("
      << this->eventHistory_SomeEvent->size() << ")\n"
      << "  Actual:   " << index << "\n";
    const EventEntry_SomeEvent& e =
      this->eventHistory_SomeEvent->at(index);
    ASSERT_EQ(arg1, e.arg1)
      << "\n"
      << "  File:     " << __ISF_callSiteFileName << "\n"
      << "  Line:     " << __ISF_callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg1 at index "
      << index
      << " in history of event SomeEvent\n"
      << "  Expected: " << arg1 << "\n"
      << "  Actual:   " << e.arg1 << "\n";
  }

} // end namespace Tlm
