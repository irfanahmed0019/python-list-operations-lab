fr=('apple','mango','orange','watermelon','guava','pineapple','dragon fruit')
def get_items(t):
    return t[2:5]
while True:
    print("""
          +-------------------------------------------------+
        |  1.Display the tuple                             |
        |  2.Find the length                               |
        |  3.Create a tuple using tuple constructer        |
        |  4.Display the second item in the tuple          |
        |  5.Display the second last item in the tuple     |
        |  6.return 3,4,5 th item                          |
        |  7.Check a specified fruit present in the tuple  |
        |  8.Add a new fruit                               |
        |  9.Combine two tuples                            |
        |  10.Remove one fruit from the tuple              |
        |  11.Delete the tuple completly                   |
        |  12.Unpack the tuple                             |
        +-------------------------------------------------+\n""")                       
                      
    choice=input("Enter your choice :")
    print(f"tuple: {fr}\n")
    match choice:
        case '1':
            print(f"tuple: {fr}\n")

        case '2':
            print(f"Length of the tuple: {len(fr)}\n")

        case '3':
            new=tuple([10,20,30,40,50])
            print(f"New tuple: {new}\n")

        case '4':
            print(f"Second element of the tuple: {fr[1]}\n")

        case '5':
            print(f"Second last element of the tuple: {fr[-2]}\n")

        case '6':
            print(f"3,4,5 th fruits : {get_items(fr)}")

        case '7':
            fruit=input('Enter a fruit to search :')
            if fruit in fr:
                print(f"{fruit} is present \n")
            else:
                print(f"{fruit} is not present\n")

        case '8':
            print("1.new mehtod\n2.old method\n")
            ch=input("Enter choice : ")
            match(ch):
                case '1':
                    fruit=input("Enter a fruit :")
                    fr=fr+(fruit,)
                    print(f'Tuple : {fr}')
                case '2':
                    fruit=input("Enter a fruit :")
                    temp=list(fr)
                    temp.append(fruit)
                    fr=tuple(temp)
                    print(f"Tuple : {fr}")
                case _:
                    print("Invalid choice\n")
        case '9':
            t2=tuple(['lion','rabbit','bear'])
            print(f"T2 = {t2}\n")
            new=fr+t2
            print(f"Combined both tuples : {new}\n")
            
        case '10':
            while True:
                fruit=input("Enter a fruit to remove : ")    
                if fruit in fr:
                    temp=list(fr)
                    temp.remove(fruit)
                    fr=tuple(temp)
                    print(f"New Tuple with {fruit} is removed : {fr}\n")
                    break
                else:
                    print("Not found.Try again")
                    print(f"Tuple = {fr}\n")
        case '11':
            del fr
            print("Sucessfully deleted...")
            

        case '12':
            a,*b,c = fr
            print(f"a = {a}\nb = {b}\nc = {c}")
            print("\n")
        case _:
            print("Invalid choice\n")
    print("|---------------------------------    |\n")
    print("|  Press 0 to return to the menu      |\n")
    print("|  Press any other number to exit     |\n")
    print("|---------------------------------    |\n")
    restart=input("Enter your choice : ")
    if (restart != '0'):
            print("Exiting...")
            break
    
