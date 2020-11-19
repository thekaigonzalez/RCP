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