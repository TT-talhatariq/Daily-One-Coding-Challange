def test(temp):
     new_list = list()
     for i in temp:
          total = 1
          for j in temp:
               if i!=j:
                   total*=j
          new_list.append(total)
     return new_list


def main():
     my_list = [1,2,3,4,5]
     print("Before: ", my_list, "\nAfter: ", test(my_list))
if __name__ == '__main__':
     main()
