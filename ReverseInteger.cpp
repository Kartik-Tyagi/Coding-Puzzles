class Solution {
public:
    int reverse(int x) {
        int result = 0;
        if (x < 0) {
            if (x == -2147483648) {
                return 0;
            }
            x = 0 - x;
            if (x/1000000000 > 0) {
                if (x%10 > 2) {
                    return 0;
                } else if (x%10 == 2) {
                    if (x%100 > 12) {
                        return 0;
                    } else if (x%100 == 12) {
                        if (x%1000 > 412) {
                            return 0;
                        } else if (x%1000 == 412) {
                            if (x%10000 > 7412) {
                                return 0;
                            } else if (x%10000 == 7412) {
                                if (x%100000 > 47412) {
                                    return 0;
                                } else if (x%100000 == 47412) {
                                    if (x%1000000 > 847412) {
                                        return 0;
                                    } else if (x%1000000 == 847412) {
                                        if (x%10000000 > 3847412) {
                                            return 0;
                                        } else if (x%10000000 == 3847412) {
                                            if (x%100000000 > 63847412) {
                                                return 0;
                                            } else if (x%100000000 == 63847412) {
                                                if (x%1000000000 > 463847412) {
                                                    return 0;
                                                } else if (x%1000000000 == 463847412) {
                                                    if (x > 8463847412) {
                                                        return 0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            while (x > 0) {
                result = result*10 - x%10;
                x = x/10;
            }
        } else {
            if (x/1000000000 > 0) {
                if (x%10 > 2) {
                    return 0;
                } else if (x%10 == 2) {
                    if (x%100 > 12) {
                        return 0;
                    } else if (x%100 == 12) {
                        if (x%1000 > 412) {
                            return 0;
                        } else if (x%1000 == 412) {
                            if (x%10000 > 7412) {
                                return 0;
                            } else if (x%10000 == 7412) {
                                if (x%100000 > 47412) {
                                    return 0;
                                } else if (x%100000 == 47412) {
                                    if (x%1000000 > 847412) {
                                        return 0;
                                    } else if (x%1000000 == 847412) {
                                        if (x%10000000 > 3847412) {
                                            return 0;
                                        } else if (x%10000000 == 3847412) {
                                            if (x%100000000 > 63847412) {
                                                return 0;
                                            } else if (x%100000000 == 63847412) {
                                                if (x%1000000000 > 463847412) {
                                                    return 0;
                                                } else if (x%1000000000 == 463847412) {
                                                    if (x > 7463847412) {
                                                        return 0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            while (x > 0) {
                result = result*10 + x%10;
                x = x/10;
            }
        }
        return result;
    }
};
