// ======================================================================
// \title  StandardBlankComponent.cpp
// \author lex
// \brief  cpp file for StandardBlankComponent component implementation class
// ======================================================================

#include "Components/StandardBlankComponent/StandardBlankComponent.hpp"
#include "FpConfig.hpp"

namespace Components {

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  StandardBlankComponent ::
    StandardBlankComponent(const char* const compName) :
      StandardBlankComponentComponentBase(compName)
  {

  }

  StandardBlankComponent ::
    ~StandardBlankComponent()
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for commands
  // ----------------------------------------------------------------------

  void StandardBlankComponent ::
    TODO_cmdHandler(
        FwOpcodeType opCode,
        U32 cmdSeq
    )
  {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
  }

}
