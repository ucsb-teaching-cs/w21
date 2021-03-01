...

Comparator<MenuItem> sortUsingName = Comparator.comparing(MenuItem, getName());

Comparator<MenuItem> sortUsingCategory = Comparator.comparing(MenuItem, getCategory());

// Both seem right but aren't working, and the compound ones don't work as well
// Compound comparators

Comparator<MenuItem> sortUsingCategoryThenName = Comparator.comparing(MenuItem, getCategory())
                                                    .thenComparing(MenuItem, getName());

Comparator<MenuItem> sortUsingCategoryThenPriceDescendingThenByName() {
    Comparator.comparing(MenuItem, getCategory())
    .thenComparing(MenuItem, getPriceInCents().reversed())
    .thenComparing(MenuItem, getName());
}

...