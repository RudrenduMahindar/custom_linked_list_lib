# C++ Custom Linked List library for Bazel and Google Test

> Can be used in Visual Studio Code

You can use this library for most of your C++ projects without the need for changing the BUILD files.

## Installation

You can copy this using this command:

```bash
git clone https://github.com/RudrenduMahindar/custom_linked_list_lib.git
```

### Run main:

You can run this using `bazel`:

```bash
bazel run src/main:main
```

### Run Tests:

You can run unit tests using [`bazel`](installing-bazel):

```bash
bazel test tests:tests
```

## Directory Structure

![Directory Structure](https://github.com/ourarash/cpp-template/blob/master/tree.png?raw=true | width = 100)

## Installing Bazel

This repo uses `Bazel` for building C++ files.
You can install Bazel using this [link](https://docs.bazel.build/versions/master/install.html).

### Credit

This repo was inspired by [this post](https://www.ratanparai.com/c++/writing-unit-tests-with-bazel/).
