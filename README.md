# CPP-Module-04

This project is part of the 42 school C++ curriculum. It focuses on subtype polymorphism, abstract classes, interfaces, and virtual destructors.

## Exercises

- **ex00** — Introduces polymorphism through an `Animal` base class with `Dog` and `Cat` subclasses, alongside a `WrongAnimal`/`WrongCat` pair to illustrate the difference between proper polymorphic behavior and non-virtual function hiding.
- **ex01** — Extends the `Animal` hierarchy with a `Brain` member to demonstrate deep copy semantics and proper resource management (constructors, destructors, copy assignment).
- **ex02** — Turns `Animal` into an abstract class (`AAnimal`) that cannot be instantiated, while `Dog` and `Cat` remain concrete, fully functional subclasses.
- **ex03** — Implements an interface-based "Materia" system (`ICharacter`, `IMateriaSource`, `AMateria`, `Ice`, `Cure`, `Character`) showcasing interfaces and abstract classes working together.

- ## Build

- Each exercise has its own Makefile:
- ```
  cd ex00 && make   # builds the ex00 executable
  ```
  Repeat inside `ex01`, `ex02`, and `ex03` as needed. Use `make clean`, `make fclean`, or `make re` to clean/rebuild.

  ## Constraints

  - Follows the 42 Norm
  - Compiles without errors or warnings (`-Wall -Wextra -Werror`)
  - Written in C++98
