# Python List Operations Lab

A Python practical lab that demonstrates **25 list operations** using student names generated with **Faker** and marks created with **NumPy**.

## Repository

GitHub: https://github.com/irfanahmed0019/python-list-operations-lab

## What this project covers

* List creation
* List slicing
* Positive and negative indexing
* `append()`
* `insert()`
* `extend()`
* Updating list items
* `len()`
* `min()` and `max()` on NumPy arrays
* Sorting
* Reversing
* Copying
* `count()`
* `remove()`
* `pop()`
* `del`
* Converting a NumPy array to a list

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

Install packages:

```bash
pip install -r requirements.txt
```

If you want to install manually:

```bash
pip install numpy Faker
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

Install packages:

```powershell
pip install -r requirements.txt
```

If you want to install manually:

```powershell
pip install numpy Faker
```

Run the program:

```powershell
python main.py
```

## Example Output

The program generates six fake student names and a NumPy array of marks, then performs different list operations step by step.

Example setup:

```python
import numpy as np
from faker import Faker

fake = Faker()
Faker.seed(7)

names = [fake.name() for _ in range(6)]
marks = np.arange(10, 60, 10)
```

## Purpose

This lab was created for practicing Python list operations in a simple student-data format. It helps build confidence with slicing, insertion, deletion, copying, reversing, and list manipulation.

## Note

`Faker.seed(7)` is used so the generated names stay consistent across runs.

## Author

**Irfan Ahammad J**

GitHub: [irfanahmed0019](https://github.com/irfanahmed0019)
