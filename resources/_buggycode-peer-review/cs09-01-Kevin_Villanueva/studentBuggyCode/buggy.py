# testFile.py

#import pytest

from Apartment import Apartment
from lab06 import *
    
def test_lessThanOperator():
    a0 = Apartment(1806, 255, "excellent")
    a1 = Apartment(1502, 280, "average")
    a2 = Apartment(1502, 350, "bad")
    a3 = Apartment(700, 200, "excellent")
    a4 = Apartment(700, 200, "bad")
    a5 = Apartment()
    assert a1 < a0 == True 
    assert a1 < a2 == True
    assert a3 < a4 == True
    assert a2 < a4 == False
    assert a5 < a4 == True

test_lessThanOperator()

