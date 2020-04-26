def print_formatted(number):
    w = len(str(bin(number)).replace('0b','')) #removes 0b from beginnig
    
    for i in range(1,number+1):   
        dc = str(i).rjust(w,' ')
        bn = bin(i)[2:].rjust(w,' ')   
        oc = oct(i)[2:].rjust(w, ' ') 
        hx = hex(i)[2:].rjust(w, ' ').upper() # As it represents 0x at beginningprintf from 2nd index. 
        print(dc, oc, hx, bn)


if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
