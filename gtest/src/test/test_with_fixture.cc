#include <gtest/gtest.h>
#include <iostream>


class SomeTestCase: public ::testing::Test {
protected:
  int someint = 42;

  virtual void SetUp() {
    std::cout << "setting up test" << std::endl;
  }

  virtual void TearDown() {
    std::cout << "tearing down test" << std::endl;
  }
};


TEST_F(SomeTestCase, someTest) {
  EXPECT_EQ(42, someint);
}

/* 1. ajoutez un attibut protégé de type int dans la fixture mettez le égal à 0 et incrémentez le de 1 dans SetUp() */
/* 2. créez un nouveau test dans lequel vous testez que l'attibut ajouté en 1. est égal à 1 */
/* 3. créez un nouveau test dans lequel vous testez que l'attibut ajouté en 1. est égal à 2 */
/* 4. mettez l'attribut à 0 dans TearDown(), quel test échoue? */
