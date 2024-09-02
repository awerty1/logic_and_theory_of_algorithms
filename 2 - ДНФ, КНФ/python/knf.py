def build_cnf(truth_table):
    cnf = ""

    for i in range(8):
        if truth_table[i] == 0:
            x = i // 4
            y = (i % 4) // 2
            z = i % 2

            if cnf:
                cnf += " * "
            
            cnf += "("

            if x == 0:
                cnf += "x"
            else:
                cnf += "!x"

            if y == 0:
                cnf += " + y"
            else:
                cnf += " + !y"

            if z == 0:
                cnf += " + z"
            else:
                cnf += " + !z"
            
            cnf += ")"

    return cnf


truth_table = []
for _ in range(8):
    truth_table.append(int(input()))

cnf = build_cnf(truth_table)
print(cnf)