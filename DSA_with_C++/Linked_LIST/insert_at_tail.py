class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

def insert_at_tail(head, v):
    new_node = Node(v)
    if head is None:
        return new_node
    temp = head
    while temp.next is not None:
        temp = temp.next
    temp.next = new_node
    return head

def print_linked_list(head):
    print("Your linked list:", end=" ")
    temp = head
    while temp is not None:
        print(temp.val, end=" ")
        temp = temp.next
    print()

def main():
    head = None
    while True:
        print("Option 1: Insert at tail")
        print("Option 2: Print linked list")
        print("Option 3: Terminate")
        op = int(input("Choose an option: "))
        if op == 1:
            v = int(input("Please enter value: "))
            head = insert_at_tail(head, v)
        elif op == 2:
            print_linked_list(head)
        elif op == 3:
            break
        else:
            print("Invalid option.")

if __name__ == "__main__":
    main()
