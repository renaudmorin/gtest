#include <gtest/gtest.h>


TEST(test1, doesItWork) {
  int i = 1;

  EXPECT_EQ(1, i);
}

/* 1. Écrivez un autre test plus complexe, en utilisant EXPECT_NE */
/* 2. Écrivez un autre test plus complexe, en utilisant ASSERT_EQ et ensuite,
   EXPECT_EQ, que se passe-t-il si le ASSERT_EQ échoue? */
/* 3. Essayez d'autres assertions */
/* 4. Écrivez une fonction retournant un ::testing::AssertionResult et qui écrit son propre message d'erreur */
/* 5. Utilisez la fonction écrite en 4. pour un test */
