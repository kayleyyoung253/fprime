#ifdef FPRIME_CMAKE
#include <GTestBase.hpp>
#else
#include "Autocoder/GTestBase.hpp"
#endif

// Very minimal to test autocoder. Some day they'll be actual unit test code

class ATester : public Tlm::TestEventGTestBase {
    public:
#if FW_OBJECT_NAMES == 1
        ATester(void) : Tlm::TestEventGTestBase("comp",10) {
#else
        ATester(void) : Tlm::TestEventGTestBase(10)  {
#endif
    }
};

int main(int argc, char* argv[]) {

    ATester testBase;

}
