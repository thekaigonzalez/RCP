import time
from colorama import Fore
print('Control Panel 2020. Kai-Builder/RCP')
ab = True
while True:
    a = input('>>> ')
    if a == 'reload --help':
        print('Reloads the Control Panel.')
    elif a.strip() == 'reload':
        print('Reloading..')
        time.sleep(3)
        print('All Scripts reloaded successfully')
    elif a.strip() == 'printer':
        print('Alright Buddy')
        time.sleep(3)
        print('Loading FileTransfer')
        time.sleep(4)
        while ab:
            print('Working!')
            print('----------------Printer---------------')
            print('1. Print Something Back to current session')
            print('2. Build a Script using RCP\'s Language.')
            print('3. Make A Text File')
            print('4. Read Data From existing file')
            print('5. Mess Around with the RCPAPI')
            m = input('>>>')
            if m.strip() == '1':
                print('Write anything')
                i = input('>>>')
                print(i)
            elif m.strip() == '2':
                print('Choose a Current Workspace Name.')
                name = input('>>>')
                o = open(name + '.py', "w")
                o.write('from RCPAPI import * # Gather the API\n\n\ndef main():\n\t# This is where your code goes\n\n\n\n\nmain():')
                o.close()
                print('All Files Have been Built!')
            elif m.strip() == '3':
                print('What do you want to have inside the txt file?')
                i = input('>>>')
                e = open('UserGenfile.txt', 'w')
                e.write(i)
                e.close()
                time.sleep(3)
                print('All Files Have been Built')