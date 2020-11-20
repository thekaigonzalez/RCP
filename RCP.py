import time
import webbrowser

print('Thank you For using Roe\'s Command Prompt!')
print('To start, Type CMDS or Commands.')
while True: # So The program doesnt stop when user types it incorrectly
    a = input('>>>')
    if a.strip().lower() == 'cmds':
        print('\nCMDS or Commands -- Shows you the valid commands you can use.\nDiscord -- Invites you to the official Roe\'s Command Prompt Discord Server.\nExit -- Exits Roe\'s Command Prompt.\nPrinter -- Creates a file and puts text you want in there.\n')
    elif a.strip().lower() == 'commands':
        print('\nCommands or CMDS -- Shows you the valid commands you can use.\nDiscord -- Invites you to the official Roe\'s Command Prompt Discord Server.\nExit -- Exits Roe\'s Command Prompt.\nPrinter -- Creates a file and puts text you want in there.\n')
    elif a.strip().lower() == 'printer':
        print('\nStarting Printer..')
        time.sleep(0.9)
        print('Put what you want to print into the chat:')
        n = input('')
        print('Put the name of the file in chat you want it to be:')
        na = input('')
        a2 = open(na + '.txt', "w")
        a2.write(n)
        a2.close()
        print('Done, check the folder Roe\'s Command Prompt is in and your file will be there.\n')
    elif a.strip().lower() == 'discord':
        print('\nOpening Discord..\n')
        time.sleep(0.9)
        webbrowser.open('https://discord.gg/V5AqtpXQth')
    elif a.strip().lower() == 'exit':
        print('\nExiting..')
        time.sleep(0.9)
        exit()
    else:
        print('\n\aThat is not a valid command.\n')
