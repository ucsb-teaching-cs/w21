// Please assume this test is accurate
// In short, it attempts to confirm if subract(Rational(1, 4), Rational(3, 4)) produces Rational(-1, 2)

test("(5 pts) pressing the calculate button should subtract the two rationals", () => {
  const { getAllByPlaceholderText, getByRole, getByText } = render(
    <Subtract />
  );

  const title = getByText("Subtract");
  expect(title).toBeInTheDocument();

  const numeratorFields = getAllByPlaceholderText("numerator");
  const denominatorFields = getAllByPlaceholderText("denominator");
  userEvent.type(numeratorFields[0], "1");
  userEvent.type(denominatorFields[0], "4");
  userEvent.type(numeratorFields[1], "3");
  userEvent.type(denominatorFields[1], "4");

  const calculateButton = getByRole("button");
  userEvent.click(calculateButton);

  const resultNumeratorField = getAllByPlaceholderText("numerator")[2];
  const resultDenominatorField = getAllByPlaceholderText("denominator")[2];
  expect(resultNumeratorField.value).toEqual("-1");
  expect(resultDenominatorField.value).toEqual("2");
});
