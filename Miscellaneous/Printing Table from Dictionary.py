"""
 Write a program to output a Table in python console from the following dictionary as below:
Input Dictionary:
films = {
    ‘Phase 3’:  {
        6: [2012, ‘Avengers’],   
        5: [2011, ‘Captain America: The first avenger’],
        4: [2011, ‘Thor’],
        1: [2016, ‘Captain Amercia: Civil War’],
        3: [2010, ‘Iron Man 2’], 
        2: [2008, ‘The Incredible Hulk’],
    },
    ‘Phase 1’:  {
        6: [2018, ‘Black Panther’],   
        9: [2019, ‘Captain Marvel’],   
        5: [2017, ‘Thor 3: Ragnarok’],
        4: [2017, ‘Spider-Man Homecoming’],
        7: [2018, ‘Avengers: Infinity War’],
        1: [2008, ‘Iron Man’],
        10: [2019, ‘Avengers: Endgame’],
        3: [2017, ‘Guardians of the Galaxy Vol. 2’], 
        8: [208, ‘Ant Man and the Wasp’],
        2: [2016, ‘Doctor Strange’],
    },
    ‘Phase 2’:  {
        6: [2015, ‘Ant Man’],   
        5: [2015, ‘Avengers 2: Age of Ultron’],
        4: [2014, ‘Guardians of the Galaxy Vol. 1’],
        1: [2013, ‘Iron Man 3’],
        3: [2014, ‘Captain America 2: The Winter Soldier’], 
        2: [2013, ‘Thor 2: The Dark World’],
    },
}
"""


def line():
    print('_' * 77)
 
 
films = {
    'Phase 3':  {
        6: [2012, 'Avengers'],   
        5: [2011, 'Captain America: The first avenger'],
        4: [2011, 'Thor'],
        1: [2016, 'Captain Amercia: Civil War'],
        3: [2010, 'Iron Man 2'], 
        2: [2008, 'The Incredible Hulk'],
    },
    'Phase 1':  {
        6: [2018, 'Black Panther'],   
        9: [2019, 'Captain Marvel'],   
        5: [2017, 'Thor 3: Ragnarok'],
        4: [2017, 'Spider-Man Homecoming'],
        7: [2018, 'Avengers: Infinity War'],
        1: [2008, 'Iron Man'],
        10: [2019, 'Avengers: Endgame'],
        3: [2017, 'Guardians of the Galaxy Vol. 2'], 
        8: [2008, 'Ant Man and the Wasp'],
        2: [2016, 'Doctor Strange'],
    },
    'Phase 2':  {
        6: [2015, 'Ant Man'],   
        5: [2015, 'Avengers 2: Age of Ultron'],
        4: [2014, 'Guardians of the Galaxy Vol. 1'],
        1: [2013, 'Iron Man 3'],
        3: [2014, 'Captain America 2: The Winter Soldier'], 
        2: [2013, 'Thor 2: The Dark World'],
    },
}
line()
print("|{:<10}| {:<10}| {:<10}| {:39}|".format('Phase No.', 'Sl.No', 'Year', "Name"))
line()
 
for phase, phase_info in sorted(films.items()):
 
    print('|{:<75}|'.format(phase))
    line()
    for key, values in sorted(phase_info.items()):
        print("|          |{:<10}| {:<10}| {:<40}|".format(key, values[0], values[1]))
        line()
 
line()
