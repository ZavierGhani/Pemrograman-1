def main():
    # Test Case 1
    a, b, i, j, x, y = map(float, input().split())
    hasil = ((a - b) * i) / j - (x + y)

    print(f"{hasil:.3f}")

    # Test Case 2
    a, b = map(float, input().split())
    i, j = map(float, input().split())
    x, y = map(float, input().split())
    hasil = ((a - b) * i) / j - (x + y)
   
    print(f"{hasil:.3f}")

if __name__ == "__main__":
    main()
