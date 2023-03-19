import random

player_wins = 0
comp_wins = 0

def choose_option():
    user_choice = input('Choose Rock,Paper or Scissors: ')
    if user_choice in ['Rock','rock','R','r']:
        user_choice = 'r'
    elif user_choice in ['Paper','paper','P','p']:
        user_choice = 'p'
    elif user_choice in ['Scissors','scissors','S','s']:
        user_choice = 's'
    else:
        print('I did not understand,try again.')
        choose_option()
    return user_choice

def comp_option():
    comp_choice = random.randint(1,3)
    if comp_choice == 1:
        comp_choice = 'r'
    elif comp_choice == 2:
        comp_choice = 'p'
    else:
        comp_choice = 's'
    return comp_choice

while True:
    print(' ')

    user_choice = choose_option()
    comp_choice = comp_option()
    print(' ')

    if user_choice == 'r':
        if comp_choice == 'r':
            print('You choose rock, the computer choose rock.You tied')
        elif comp_choice == 'p':
            print('You choose rock, the computer choose paper.You lose')
            comp_wins += 1
        elif comp_choice == 's':
            print('You choose rock, the computer choose scissors.You win')
            player_wins += 1

    elif user_choice == 'p':
        if comp_choice == 'r':
            print('You choose paper, the computer choose rock.You win')
            player_wins += 1      
        elif comp_choice == 'p':
            print('You choose paper, the computer choose paper.You tied')
        elif comp_choice == 's':
            print('You choose paper, the computer choose scissors.You lose')
            comp_wins += 1

    elif user_choice == 's':
        if comp_choice == 'r':
            print('You choose scissors, the computer choose rock.You lose')
            comp_wins += 1      
        elif comp_choice == 'p':
            print('You choose scissors, the computer choose paper.You win')
            player_wins += 1
        elif comp_choice == 's':
            print('You choose scissors, the computer choose scissors.You tied')

    print(' ')
    print('Player wins:' +str(player_wins))
    print('Computer wins:' +str(comp_wins))
    print(' ')

    user_choice = input('Do you want to play again?(y/n)')
    if user_choice in ['Yes','yes','Y','y']:
                  pass
    elif user_choice in ['No','no','N','n']:
        break
    else:
        break

    
        
        
                  
                  
                  
                  
           
        
        
              
        