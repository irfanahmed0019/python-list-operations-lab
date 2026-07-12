# Python List Operations Lab

A Python practical lab demonstrating **25 list operations** using randomly generated student names with **Faker** and student marks with **NumPy**.

## Concepts Covered

* List slicing
* Positive and negative indexing
* `append()`
* `insert()`
* `extend()`
* Updating list elements
* `len()`
* Minimum and maximum values
* Sorting
* Reversing lists
* Copying lists
* `count()`
* `remove()`
* `pop()`
* `del`
* Converting a NumPy array to a Python list

## Technologies Used

* Python 3
* NumPy
* Faker

## Installation

### Linux

Clone the repository:

```bash
git clone https://github.com/irfanahmed0019/python-list-operations-lab.git
cd python-list-operations-lab
```

Create a virtual environment:

```bash
python3 -m venv .venv
```

Activate the virtual environment:

```bash
source .venv/bin/activate
```

Install the required packages:

```bash
pip install numpy Faker
```

Or install from `requirements.txt`:

```bash
pip install -r requirements.txt
```

Run the program:

```bash
python3 main.py
```

---

### Windows

Clone the repository:

```powershell
git clone https://github.com/irfanahmed0019/python-list-operations-lab.git
cd python-list-operations-lab
```

Create a virtual environment:

```powershell
python -m venv .venv
```

Activate the virtual environment:

```powershell
.venv\Scripts\activate
```

Install the required packages:

```powershell
pip install numpy Faker
```

Or install from `requirements.txt`:

```powershell
pip install -r requirements.txt
```

Run the program:

```powershell
python main.py
```

## Example

The program generates student names using Faker and marks using NumPy:

```python
import numpy as np
from faker import Faker

fake = Faker()
Faker.seed(7)

names = [fake.name() for _ in range(6)]
marks = np.arange(10, 60, 10)
```

A fixed Faker seed is used to make the generated names reproducible across runs.

## Purpose

This project was created as part of my **Python Application Development Lab** to practice fundamental Python list operations through a simple student-data example.

## Author

**Irfan Ahammad J**

GitHub: [@irfanahmed0019](https://github.com/irfanahmed0019)
