# Apartment.py


class Apartment:
    def __init__(self, rent = 0, metersFromUCSB = 0, condition = 'N/A'):
        self.rent = rent
        self.metersFromUCSB = metersFromUCSB
        self.condition = condition

    def getRent(self):
        return self.rent

    def getMetersFromUCSB(self):
        return self.metersFromUCSB

    def getCondition(self):
        return self.condition

    def getApartmentDetails(self):
        return "(Apartment) Rent: $" + str(self.rent) + ", " + "Distance From UCSB: " + str(self.metersFromUCSB) + "m, " + "Condition: " + str(self.condition)

    def __lt__(self, rhs):
        if self.rent > rhs.rent:
            return False
        elif self.rent < rhs.rent:
            return True
        else:
            if self.metersFromUCSB > rhs.metersFromUCSB:
                return False
            elif self.metersFromUCSB < rhs.metersFromUCSB:
                return True
            else:
                conditions = ["excellent", "average", "bad"]
                if conditions.index(self.condition) > conditions.index(rhs.condition):
                    return False
                elif conditions.index(self.condition) < conditions.index(rhs.condition):
                    return True
                else:
                    return False
                

    def __gt__(self, rhs):
        if self.rent > rhs.rent:
            return True
        elif self.rent < rhs.rent:
            return False
        else:
            if self.metersFromUCSB > rhs.metersFromUCSB:
                return True
            elif self.metersFromUCSB < rhs.metersFromUCSB:
                return False
            else:
                conditions = ["excellent", "average", "bad"]
                if conditions.index(self.condition) > conditions.index(rhs.condition):
                    return True
                elif conditions.index(self.condition) < conditions.index(rhs.condition):
                    return False
                else:
                    return False

    def __eq__(self, rhs):
        if (self.rent, self.metersFromUCSB, self.condition) == (rhs.rent, rhs.metersFromUCSB, rhs.condition):
            return True
        else:
            return False



    
            
            
        
        
    