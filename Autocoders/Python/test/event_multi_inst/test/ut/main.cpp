#ifdef FPRIME_CMAKE
#include <GTestBase.hpp>
#else
#include "Autocoder/GTestBase.hpp"
#endif

// Very minimal to test autocoder. Some day they'll be actual unit test code

class ATester : public Somewhere::TestLogGTestBase {
    public:
#if FW_OBJECT_NAMES == 1
        ATester(void) : Somewhere::TestLogGTestBase("comp",10) {
#else
        ATester(void) : Somewhere::TestLogGTestBase(10)  {
#endif
    }
};

int main(int argc, char* argv[]) {

    ATester testBase;

}
