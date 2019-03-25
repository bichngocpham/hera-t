# Current tasks

| Timeline                  | Expected Version   | Task                                                                                  | Who                | Status  |
| ------------------------  | ------------------ | ------------------------------------------------------------------------------------- | ------------------ | ------- |
| 2018-12-24 -> 2018-12-26  | 0.1.3              | Write interface for input library types + library type 10X Chromium 3'                | chi Thao           | &#8730; |
| 2018-12-24 -> 2018-12-26  | global             | Investigate Cell Ranger 3.0 and the 10X Chromium 5', Chromium v3 technology           | Hy                 | &#8730; |
| 2018-12-25                | 0.1.3              | Write description to matrix.mtx file, change version number to 0.1.3                  | Thang              | &#8730; |
| 2018-12-27                | 0.1.4              | Fix memory leak in version 0.1.3                                                      | Thang              | &#8730; |
| 2018-12-26 -> 2018-12-28  | 0.2.0              | Add library Chromium 3' v3                                                            | chi Thao           | &#8730; |
| 2018-12-26 -> 2018-12-28  | 0.1.4              | Benchmark hera-T version 0.1.4 (Cell Ranger 3.0, Alevin v0.12.0) (upload benchmark script and benchmark table) | chi Thao           | &#8730; |
| 2018-12-26 -> 2018-12-28  | global             | Manuscript for benchmark version                                                      | Hy + thay Son      | &#8730; |
| 2018-12-28 -> 2019-01-02  | global             | Investigate random crash of hera-T                                                    | Thang              | &#8730; |
| 2019-03-20                | 0.2.1              | Fix random crash                                                                      | Thang              | &#8730; |
| 2019-03-25                | 0.2.2              | Fix open too many files                                                               | Thang              | &#8730; |
|                           | 0.3.0              | Implement cell hashing (library type)                                                 | chi Thao           | current |
|                           | global             | Write manual                                                                          |                    |         |
|                           | global             | Write blog                                                                            |                    |         |

# Note

    * Change version number in attribute.h
    * Every bug-fixed increases the "FIX" version number (i.e. 0.1.x -> 0.1.(x+1))
    * Every module-added increases the "MINOR" version number (i.e. 0.x.y -> 0.(x+1).0)
    * Every engine-change increases the "MAJOR" version number (i.e. x.y.z -> (x+1).0.0)

# Change logs

2018-12-24 (0.1.2) (deprecated):

    * Init repo

2018-12-25 (0.1.3) (deprecated):

    * Add library types selection
    * Write program description to matrix.mtx file

2018-12-27 (0.1.4) (deprecated):

    * Fix memory leak in version 0.1.3

2018-12-28 (0.2.0) (deprecated):

    * Support Chromium 3' v3 library

2019-03-20 (0.2.1) (release candidate):

    * Fix random crash (change from buggy semaphore to lock)

2019-03-25 (0.2.2) (release candidate):

    * Fix open all files at once
