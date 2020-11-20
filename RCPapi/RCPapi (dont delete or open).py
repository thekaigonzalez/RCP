from pathlib import Path
import sys
import time
import os

# This is the Roe Command Prompt api. This is used for addons.

class Prompt(object): # This is where all prompt Functionality is stored.
    def Prompt(self):
        print('Roe\'s command prompt')
        while True:
            a = input('>>>')
    def NewCommand(command, values):
        from RCP import a
        if a.strip() == command():
            print(values)
    def Callback(file, call):
        f = Path(file)
        if f.exists():
            print(call)
    def WaitFor(secs, after):
        time.sleep(secs)
        after


class API_LOG():
    def CreateOnAction(action, vals):
        print('Waiting For' + action)
        time.sleep(3)
        action
        time.sleep(1)
        vals
    def log(log, logChildren):
        a = open(log, "w")
        a.write(logChildren)
        a.close()


class APIReference():
    class Sheet(object):
        s_contents = 'The RCPAPI is a lightweight language built from thr ground up, for speed, time, and emotion. Where does the emotion come in?, I Dont even know'
        s_helpcommand = 'RC_Help'


