// ======================================================================
// \title  StandardBlankComponent.hpp
// \author lex
// \brief  hpp file for StandardBlankComponent component implementation class
// ======================================================================

#ifndef Components_StandardBlankComponent_HPP
#define Components_StandardBlankComponent_HPP

#include "Components/StandardBlankComponent/StandardBlankComponentComponentAc.hpp"

namespace Components {

  class StandardBlankComponent :
    public StandardBlankComponentComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Component construction and destruction
      // ----------------------------------------------------------------------

      //! Construct StandardBlankComponent object
      StandardBlankComponent(
          const char* const compName //!< The component name
      );

      //! Destroy StandardBlankComponent object
      ~StandardBlankComponent();

    PRIVATE:

      // ----------------------------------------------------------------------
      // Handler implementations for commands
      // ----------------------------------------------------------------------

      //! Handler implementation for command TODO
      //!
      //! TODO
      void TODO_cmdHandler(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq //!< The command sequence number
      ) override;

  };

}

#endif
