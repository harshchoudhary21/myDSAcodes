import pygame
import sys

class Solution:
    def __init__(self):
        self.queens_solutions = []

    def is_safe(self, row, col, board, n):
        # Check if placing a queen at [row, col] is safe
        dup_row, dup_col = row, col

        while row >= 0 and col >= 0:
            if board[row][col] == 'Q':
                return False
            row -= 1
            col -= 1

        col, row = dup_col, dup_row
        while col >= 0:
            if board[row][col] == 'Q':
                return False
            col -= 1

        row, col = dup_row, dup_col
        while row < n and col >= 0:
            if board[row][col] == 'Q':
                return False
            col -= 1
            row += 1

        return True

    def solve(self, col, board, n):
        if col == n:
            self.queens_solutions.append([row[:] for row in board])
            return

        for row in range(n):
            if self.is_safe(row, col, board, n):
                board[row][col] = 'Q'
                self.solve(col + 1, board, n)
                board[row][col] = '.'

    def solve_n_queens(self, n):
        self.queens_solutions = []
        board = [['.' for _ in range(n)] for _ in range(n)]
        self.solve(0, board, n)
        return self.queens_solutions

def draw_board(screen, board, square_size):
    n = len(board)
    screen.fill((255, 255, 255))

    for i in range(n):
        for j in range(n):
            color = (0, 0, 0) if (i + j) % 2 == 0 else (255, 255, 255)
            pygame.draw.rect(screen, color, (j * square_size, i * square_size, square_size, square_size))

    for i in range(n):
        for j in range(n):
            if board[i][j] == 'Q':
                pygame.draw.rect(screen, (255, 0, 0), (j * square_size, i * square_size, square_size, square_size))

    pygame.display.flip()

def main():
    n = int(input("Please enter the value of n: "))

    pygame.init()
    screen = pygame.display.set_mode((n * 50, n * 50))
    pygame.display.set_caption("N-Queens Visualization")

    solution_obj = Solution()
    queens_solutions = solution_obj.solve_n_queens(n)

    square_size = 50

    for board in queens_solutions:
        draw_board(screen, board, square_size)
        pygame.time.delay(1000)  # Pause for 1 second

    pygame.time.delay(3000)  # Pause for 3 seconds before closing
    pygame.quit()
    sys.exit()

if __name__ == "__main__":
    main()
