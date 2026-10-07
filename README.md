# C++ AI Code Evaluation

A practical framework for evaluating AI-generated C++ code for correctness, quality, efficiency, safety, and instruction-following.

## Purpose

This project demonstrates a structured approach to reviewing AI-generated C++ solutions.

The goal is to evaluate whether generated code:

- Solves the requested problem correctly
- Follows the user's instructions
- Handles edge cases
- Uses appropriate C++ practices
- Avoids unnecessary complexity
- Uses resources efficiently
- Is readable and maintainable
- Avoids obvious safety or reliability problems

## Evaluation Criteria

| Criterion | What I Check |
|---|---|
| Correctness | Does the code produce the expected result? |
| Instruction Following | Does it satisfy the requirements? |
| Logic | Is the reasoning and implementation sound? |
| Edge Cases | Does it handle unusual or boundary inputs? |
| Efficiency | Are time and memory usage reasonable? |
| Code Quality | Is the code readable and maintainable? |
| Safety | Does it avoid obvious unsafe practices? |
| C++ Practices | Does it use appropriate C++ features and conventions? |

## Evaluation Process

1. Understand the original programming task.
2. Identify the requirements.
3. Inspect the AI-generated solution.
4. Check the code's logic and correctness.
5. Test important edge cases.
6. Review efficiency and resource usage.
7. Identify bugs or weaknesses.
8. Explain the findings clearly.
9. Suggest improvements where appropriate.

## Example Evaluation

### Task

Write a C++ function that returns the largest value in a vector of integers.

### AI-Generated Solution

The AI-generated solution initialized the largest value to 0.

### Evaluation

**Verdict: Needs improvement**

The implementation incorrectly assumes that the largest value is at least 0.

For example, if the input is:

-8, -3, -12

the correct answer is -3, but the implementation can incorrectly return 0.

### Recommended Improvement

Initialize the largest value using an actual element from the input rather than assuming that 0 is a valid starting value.

The implementation should also define how an empty vector is handled.

## Project Status

This is an independent technical project created to demonstrate structured C++ code analysis and AI-generated code evaluation.

## Areas of Interest

- C++
- Artificial Intelligence
- Large Language Models
- AI Code Evaluation
- Software Engineering
- Algorithm Analysis
- AI Training
- Technical Data Evaluation
