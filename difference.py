def main():
    difference = int(input("What is your first number?\n")) - int(input("What is your second number?\n"))
    if difference < 0:
        difference *= -1
    print(f"The difference is: {difference}")


if __name__ == "__main__":
    main()
