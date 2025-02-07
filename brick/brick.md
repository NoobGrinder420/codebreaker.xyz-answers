### **brick**

Problem Description
-------------------

Rar the Cat has arranged a row of _N_ bricks. The _ith_ brick from the left has height _Ai_.

Peanut comes along and attempts to stack these bricks. Going from the leftmost brick to the rightmost, he stacks bricks using the following rules:

*   Let the current brick be of height _X_.
    
*   While there is at least 1 brick in the stack, he will remove the topmost brick from the stack if it is smaller than or equals to _X_. This process is repeated until there is no more bricks in the stack, or the topmost brick is _larger_ than _X_.
    
*   Add the current brick of height _X_ to the top of the stack.
    

By doing so, Peanut will get a stack of bricks with increasing height (top to bottom) at the end of the day. Rar the Cat is curious and wants to know what is in the stack. However, Peanut does not want to let Rar the Cat see the stack. Can you help Rar the Cat find out what is in the stack?

Limits
------

For all testcases, 0 ≤ Ai ≤ 109.

Subtask 1 (23%): 1 ≤ N ≤ 500.

Subtask 2 (28%): 1 ≤ N ≤ 5000.

Subtask 3 (49%): 1 ≤ N ≤ 500000.

Subtask 4 (0%): Sample Testcases.

Input
-----

The first line of input will contain one integer, _N_.

The second line of input will contain _N_ integers, representing the array _A_.

Output
------

The output should contain the heights of the bricks in the stack. The height of the topmost brick should be printed first, one height per line.

Sample Testcase 1
-----------------

### Input

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   10  1 2 9 5 7 6 3 4 2 2   `

### Output

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   2  4  6  7  9   `

### Explanation

Brick, /Height, _Ai_Stack (Top -> Bottom)11{1}22{2}39{9}45{5, 9}57{7, 9}66{6, 7, 9}73{3, 6, 7, 9}84{4, 6, 7, 9}92{2, 4, 6, 7, 9}102{2, 4, 6, 7, 9}

Sample Testcase 2
-----------------

### Input

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   5  5 4 3 2 1   `

### Output

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   1  2  3  4  5   `

Sample Testcase 3
-----------------

### Input

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   5  1 2 3 4 5   `

### Output

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   5   `

Sample Testcase 4
-----------------

### Input

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   5  4 3 2 1 5   `

### Output

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   5   `