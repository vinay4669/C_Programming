import os

def rem(directory):
        test = os.listdir(directory)
        for item in test:
            if item.endswith(".exe"):
                    os.remove( os.path.join( directory, item ) )


folder_list = ["D:/GitHub/C_Programming/basic/array/array_1_d",
               "D:/GitHub/C_Programming/basic/array/array_2_d",
               "D:/GitHub/C_Programming/basic/conditional/", 
               "D:/GitHub/C_Programming/basic/if_else/", 
               "D:/GitHub/C_Programming/basic/loop/", 
               "D:/GitHub/C_Programming/basic/pattern/", 
               "D:/GitHub/C_Programming/basic/switch_case/", 
               "D:/GitHub/C_Programming/basic/very_basic/",
               "D:/GitHub/C_Programming/basic/functions"]
for i in folder_list:
    rem(i)
