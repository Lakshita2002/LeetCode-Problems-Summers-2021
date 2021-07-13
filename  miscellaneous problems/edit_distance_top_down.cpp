int EditDistance(char* s1, char *s2, int i, int j, int dp[][100]) {
	// base case
	if (i == 0) {
		return j;
	}
	if (j == 0) {
		return i;
	}

	// recursive case
	if (s1[i - 1] == s2[j - 1]) {
		// ignore
		return EditDistance(s1, s2, i - 1, j - 1, dp);
	}
	else {
		int op1 = EditDistance(s1, s2, i - 1, j - 1); // Replace
		int op2 = EditDistance(s1, s2, i, j - 1); // Insert
		int op3 = EditDistance(s1, s2, i - 1, j); // Delete
		return min(op1, min(op2, op3)) + 1;
	}
}