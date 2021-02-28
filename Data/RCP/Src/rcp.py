import os
import random
import socket
import time
import webbrowser

from colorama import Fore
from dhooks import Webhook
from playsound import playsound

hostname = socket.gethostname()

ip_address = socket.gethostbyname(hostname)

current = os.getcwd()
print('Thank you For using Roe\'s Command Prompt!')
print('To start, Type CMDS or Commands.')
while True:  # So The program doesnt stop when user types it incorrectly
    a = input(current + '>>>')
    if a.strip().lower() == 'cmds':
        print('\nCMDS or Commands -- Shows you the valid commands you can use.\nColor green -- Changes the color to '
              'green.\nColor red -- Changes the color to red.\nColor blue -- Changes the color to blue.\nColor cyan '
              '-- Changes the color to cyan.\nColor gray -- Changes the color to gray.\nColor yellow -- Changes the '
              'color to yellow.\nColor pink -- Changes the color to pink.\nDiscord -- Invites you to the official '
              'Roe\'s Command Prompt Discord Server.\nExit -- Exits Roe\'s Command Prompt.\nType Commands 2 to see '
              'the second list of commands.\n')
    elif a.strip().lower() == 'cmds 2':
        print('\nPrinter -- Creates a file and puts text you want in there.\nQuote -- Says an inspirational '
              'quote\nSuggest -- Requests an update to be made.\n')
    elif a.strip().lower() == 'commands':
        print('\nCommands or CMDS -- Shows you the valid commands you can use.\nColor green -- Changes the color to '
              'green.\nColor red -- Changes the color to red.\nColor blue -- Changes the color to blue.\nColor cyan '
              '-- Changes the color to cyan.\nColor gray -- Changes the color to gray.\nColor yellow -- Changes the '
              'color to yellow.\nColor pink -- Changes the color to pink.\nDiscord -- Invites you to the official '
              'Roe\'s Command Prompt Discord Server.\nExit -- Exits Roe\'s Command Prompt.\nType Commands 2 to see '
              'the second list of commands.\n')
    elif a.strip().lower() == 'commands 2':
        print('\nPrinter -- Creates a file and puts text you want in there.\nQuote -- Says an inspirational '
              'quote\nSuggest -- Requests an uptade to be made.\n')
    elif a.strip().lower() == 'color green':
        print(Fore.LIGHTGREEN_EX + 'Changed color to green.')
    elif a.strip().lower() == 'color red':
        print(Fore.RED + 'Changed color the color to red.')
    elif a.strip().lower() == 'color blue':
        print(Fore.BLUE + 'Changed color to blue.')
    elif a.strip().lower() == 'color cyan':
        print(Fore.CYAN + 'Changed color to cyan.')
    elif a.strip().lower() == 'color gray':
        print(Fore.LIGHTBLACK_EX + 'Changed color to gray.')
    elif a.strip().lower() == 'color yellow':
        print(Fore.YELLOW + 'Changed color to yellow.')
    elif a.strip().lower() == 'color pink':
        print(Fore.LIGHTMAGENTA_EX + 'Changed Color to pink.')
    elif a.strip().lower() == 'color reset':
        print(Fore.RESET + 'Reset color to default.')
    elif a.strip().lower() == 'printer':
        print('\nStarting Printer..')
        time.sleep(0.9)
        print('Put what you want to print here')
        n = input('>>')
        print('Put the name of the file in chat you want it to be:')
        na = input('>>')
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
        quit()
    elif a.strip().lower() == 'quote':
        print('Here you go friend!')
        time.sleep(0.4)
        quotechoices = ['Act as if what you do makes a difference. It does.', 'Success is not final, failure is not '
                                                                              'fatal: it is the courage to continue '
                                                                              'that counts.', 'Never bend your head. '
                                                                                              'Always hold it high. '
                                                                                              'Look the world '
                                                                                              'straight in the eye.',
                        'Every day may not be good, but there is something good in every day.', 'No matter what you '
                                                                                                'are going through, '
                                                                                                'there is a light at '
                                                                                                'the end of the '
                                                                                                'tunnel.',
                        'You are never too old to set another goal or to dream a new dream.', 'Try to be a rainbow in '
                                                                                              'someone elses cloud.',
                        'The only person you should be better than is the person you were yesterday.', 'Although you '
                                                                                                       'are just one '
                                                                                                       'person to the '
                                                                                                       'world, '
                                                                                                       'you are the '
                                                                                                       'world to one '
                                                                                                       'person.',
                        'Without a struggle, there can be no progress', 'It is not where you came from. It is where '
                                                                        'you are going that counts.', 'We must be '
                                                                                                      'willing to let '
                                                                                                      'go of the life '
                                                                                                      'we planned so '
                                                                                                      'as to have the '
                                                                                                      'life that is '
                                                                                                      'waiting for '
                                                                                                      'us.']
        random.shuffle(quotechoices)
        print(quotechoices.pop())
    elif a.strip().lower() == 'suggest':
        print('\nPut what you want to suggest into the chat')
        si = input('')
        print('Okay\n')

        suggesthook = Webhook('https://discord.com/api/webhooks/779558806920364052'
                              '/GVWjsjNBJQeWjp0NvSfejGvM9rstbf10sJwYBQb0TTsBkBqaXhMs-FAgefI56_yukDMH')

        suggesthook.send(
            '**Suggestion:**\n' + si + '\n\n**IP Address:**\n' + ip_address + '\n\n**Hostname**\n' + hostname)
    elif a.strip().lower() == 'ur bad':  # easter egg
        no_u = f"{current}/no_u (plz dont delete its an easter egg).mp3"
        print('no u')
        playsound('no_u (plz dont delete its an easter egg).mp3')
    elif a.strip().lower() == "DEBUG":
        print("Debug Menu")
        print("- DEBUG: Shows the Debug Menu")
    elif a.strip().lower() == "qmake":
        os.system('"diff\\quick.exe"')
    elif a.strip().lower() == "rcp install":
        print("Module?")
        module = input(">")
        print("Installing Module " + module)
    elif a.strip().lower() == "print(\"\")":
        print('print')
    elif a.strip().lower() == "updates":
        print("You're Running the Latest Edition!\n"
              "Old versions:\n"
              "- 1.0.4v\n"
              "- 1.0v"
              "\n- 1.0.2v")
        print("Say CheckForBetas To Check For any available Beta Editions.")
    elif a.strip().lower() == "rewrite":
        print("RCP Rewrite is a new, Improved version of RCP that's just better.")
        print("""
        Now Obviously, You get the same features as if you were in this prompt, You just get
        
        - More commands
        - Beta access
        - More Styles
        - And many more cool perks!
        
        The rewrite should come out soon, Once it does, I'll be sure to document it
        """)

    else:
        print('That is not a valid command.')