import pyparsing as pp

file = open("./input.txt", "r")

red_max = 12
green_max = 13
blue_max = 14

parse_game = "Game" + pp.Word(pp.nums) + (pp.Word(pp.nums) + pp.Word(pp.Alphas) + ";"[...])[...]


for i in range(1000):
    line = file.readline()
    print(parse_game)
