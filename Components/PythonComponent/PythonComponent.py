""" PythonComponent.py:

Python implementation of the PythonComponent fprime component. This component is dependent on autocoded bindings that
map to this component. **Note:** ensure this file is renamed to PythonComponent.py in the current folder.
"""

# Required imports for the implementation to work
import fprime_pybind

# Typical, but optional, imports
import Fw
import Components


class PythonComponent(fprime_pybind.PythonComponentBase):
    """ Implementation of PythonComponent component. """

    def __init__(self):
        """ Constructor implementation """
        pass # TODO: fill out custom constructing logic

    
    def SAY_HELLO_cmdHandler(self, opCode, cmdSeq, greeting):
        """ Command handler for SAY_HELLO """
        self.cmdResponse_out(opCode, cmdSeq, Fw.CommandResponse.COMMAND_OK) # TODO: implement SAY_HELLO

    