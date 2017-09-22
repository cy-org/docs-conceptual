### RSACng.VerifyHash now returns False for any verification failure

|   |   |
|---|---|
|Details|Starting with the .NET Framework 4.6.2, this method returns <strong>False</strong> if the signature itself is badly formatted. It now returns false for any verification failure.In the .NET Framework 4.6 and 4.6.1, the method throws a <xref:System.Security.Cryptography.CryptographicException?displayProperty=name> if the signature itself is badly formatted.|
|Suggestion|Any code whose execution depends on handling the <xref:System.Security.Cryptography.CryptographicException?displayProperty=name> should instead execute if validation fails and the method returns <strong>False</strong>.|
|Scope|Minor|
|Version|4.6.2|
|Type|Runtime|
|Affected APIs|<ul><li><xref:System.Security.Cryptography.RSACng.VerifyHash(System.Byte%5B%5D%2CSystem.Byte%5B%5D%2CSystem.Security.Cryptography.HashAlgorithmName%2CSystem.Security.Cryptography.RSASignaturePadding)?displayProperty=fullName></li></ul>|

