/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * Additions Copyright 2016 Espressif Systems (Shanghai) PTE LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 * @file aws_iot_certifcates.c
 * @brief File to store the AWS certificates in the form of arrays
 */

#ifndef ___AWS_CERTS_H___
#define ___AWS_CERTS_H___

const char aws_root_ca_pem[] = {"-----BEGIN CERTIFICATE-----\n\
MIIE0zCCA7ugAwIBAgIQGNrRniZ96LtKIVjNzGs7SjANBgkqhkiG9w0BAQUFADCB\n\
yjELMAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQL\n\
ExZWZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTowOAYDVQQLEzEoYykgMjAwNiBWZXJp\n\
U2lnbiwgSW5jLiAtIEZvciBhdXRob3JpemVkIHVzZSBvbmx5MUUwQwYDVQQDEzxW\n\
ZXJpU2lnbiBDbGFzcyAzIFB1YmxpYyBQcmltYXJ5IENlcnRpZmljYXRpb24gQXV0\n\
aG9yaXR5IC0gRzUwHhcNMDYxMTA4MDAwMDAwWhcNMzYwNzE2MjM1OTU5WjCByjEL\n\
MAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQLExZW\n\
ZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTowOAYDVQQLEzEoYykgMjAwNiBWZXJpU2ln\n\
biwgSW5jLiAtIEZvciBhdXRob3JpemVkIHVzZSBvbmx5MUUwQwYDVQQDEzxWZXJp\n\
U2lnbiBDbGFzcyAzIFB1YmxpYyBQcmltYXJ5IENlcnRpZmljYXRpb24gQXV0aG9y\n\
aXR5IC0gRzUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCvJAgIKXo1\n\
nmAMqudLO07cfLw8RRy7K+D+KQL5VwijZIUVJ/XxrcgxiV0i6CqqpkKzj/i5Vbex\n\
t0uz/o9+B1fs70PbZmIVYc9gDaTY3vjgw2IIPVQT60nKWVSFJuUrjxuf6/WhkcIz\n\
SdhDY2pSS9KP6HBRTdGJaXvHcPaz3BJ023tdS1bTlr8Vd6Gw9KIl8q8ckmcY5fQG\n\
BO+QueQA5N06tRn/Arr0PO7gi+s3i+z016zy9vA9r911kTMZHRxAy3QkGSGT2RT+\n\
rCpSx4/VBEnkjWNHiDxpg8v+R70rfk/Fla4OndTRQ8Bnc+MUCH7lP59zuDMKz10/\n\
NIeWiu5T6CUVAgMBAAGjgbIwga8wDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8E\n\
BAMCAQYwbQYIKwYBBQUHAQwEYTBfoV2gWzBZMFcwVRYJaW1hZ2UvZ2lmMCEwHzAH\n\
BgUrDgMCGgQUj+XTGoasjY5rw8+AatRIGCx7GS4wJRYjaHR0cDovL2xvZ28udmVy\n\
aXNpZ24uY29tL3ZzbG9nby5naWYwHQYDVR0OBBYEFH/TZafC3ey78DAJ80M5+gKv\n\
MzEzMA0GCSqGSIb3DQEBBQUAA4IBAQCTJEowX2LP2BqYLz3q3JktvXf2pXkiOOzE\n\
p6B4Eq1iDkVwZMXnl2YtmAl+X6/WzChl8gGqCBpH3vn5fJJaCGkgDdk+bW48DW7Y\n\
5gaRQBi5+MHt39tBquCWIMnNZBU4gcmU7qKEKQsTb47bDN0lAtukixlE0kF6BWlK\n\
WE9gyn6CagsCqiUXObXbf+eEZSqVir2G3l6BFoMtEMze/aiCKm0oHw0LxOXnGiYZ\n\
4fQRbxC1lfznQgUy286dUV4otp6F01vvpX1FQHKOtw5rDgb7MzVIcbidJ4vEZV8N\n\
hnacRHr2lVz2XTIIM6RUthg/aFzyQkqFOFSDX9HoLPKsEdao7WNq\n\
-----END CERTIFICATE-----\n"};

const char certificate_pem_crt[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDWjCCAkKgAwIBAgIVAJSoA09XVbO/+SRp5mMuL1CnAp/YMA0GCSqGSIb3DQEB\n\
CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n\
IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xODA0MDUxODI5\n\
MjhaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n\
dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDkxsHEhFgZo30hsj80\n\
6Y+qlFDCBIQqpsCXstQqAMKzMgw+5fmTOk6gmWMXEvuKAX2ctXjIJpRdpxyaKl8z\n\
GIfqH7mRkN9/Mmxcnfwv7L3pgg3IYEqlUIv7fMWaxdeLq8DqAwSUnhSmLhG63dr7\n\
iVenDCY1bHjU10gq757ZBZCXY+qKJfXsb3uCBjpoPS+d7TbymwIruZ2T3bFcxcnf\n\
w+kN6bNbb5kI4EM/uoVH4ts9Ztpfc2Zn6XRraLVZ76KZ87aorQdOjVX+/WoEi7hP\n\
MDNsUqvMjcPh2+QrRstpVWsOgep9M+2QyJ8sjSv7eFLt1cG4qn5Dg5/qw7RZ/AZY\n\
CfbrAgMBAAGjYDBeMB8GA1UdIwQYMBaAFKewN8xggWQsnMfaItbSeJBvvP30MB0G\n\
A1UdDgQWBBTESTxYk9/f47tXE0BLG8jhuNSBLjAMBgNVHRMBAf8EAjAAMA4GA1Ud\n\
DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAXxeGAzIy/oC3Ly16ODe+sK/U\n\
E5AWyQhfesFkwVuh0JeLxBkxSrkYsadsuz4kHt39VRdKBhAB9c87buRDUr+vTlf8\n\
zlyarEk+qAQ/DuuG/fGtWYhNN5utuNYtbfS/nPoUgdt9vmHAPefnJjvJxNllTQrS\n\
9S0p7uR+QI8HC7X2SjQLIQ/r9XUw305FRrqI+QSazI2WkOjrJpIux2f6/gQ1dWWU\n\
so85aQENXqfI6NXx4paJWfbOgXoLBW6EylZkeQk3GPB4fyTlr80OklxiaOCNv1MT\n\
bqd56kkOhOqdSXMc1qKQ3h0/4P56VcRkSKaaR13X6SjaP5sNCwwc/OhvOS/XfA==\n\
-----END CERTIFICATE-----\n"};

const char private_pem_key[] = {"-----BEGIN RSA PRIVATE KEY-----\n\
MIIEpQIBAAKCAQEA5MbBxIRYGaN9IbI/NOmPqpRQwgSEKqbAl7LUKgDCszIMPuX5\n\
kzpOoJljFxL7igF9nLV4yCaUXaccmipfMxiH6h+5kZDffzJsXJ38L+y96YINyGBK\n\
pVCL+3zFmsXXi6vA6gMElJ4Upi4Rut3a+4lXpwwmNWx41NdIKu+e2QWQl2PqiiX1\n\
7G97ggY6aD0vne028psCK7mdk92xXMXJ38PpDemzW2+ZCOBDP7qFR+LbPWbaX3Nm\n\
Z+l0a2i1We+imfO2qK0HTo1V/v1qBIu4TzAzbFKrzI3D4dvkK0bLaVVrDoHqfTPt\n\
kMifLI0r+3hS7dXBuKp+Q4Of6sO0WfwGWAn26wIDAQABAoIBAQCqDsTCm84RYOIH\n\
RkSNxIAywIU3c7v7KHFJUnk7r80K/0zzBGh89H62Cs8Ju+aXM3x4HL1nqqXm5+3u\n\
+0hA5x9A/cwnVJWOK6E5R4bK6SRSi4ZLSKi0MiecDael4SLUhBum2A9zmf6neN9d\n\
FMVO7Uzms7VDSRqYvF6869ocYHKW1RqvSw3m47Xd32/zg8wz2vPbgERae0Rd+v0E\n\
tGMfVR1Zzm0Qo1NWcbXmD8NdCkgGI73vgaHdshcALwNVdeNJgSHmYD9s0s4X+xMI\n\
6CLK/hbuaLmWRQt54XwgJ4EDZlbjb69fICNG1g7V4tGbIvh1q1SgBKxclNMQOehu\n\
/EXcdIBhAoGBAP4e3bq0PjBf30A99GSEvAW390L2zDIpu/F8ErJaKpYHImb3ohS3\n\
wPf8Yydg+D6mXW6MAACKMCflKXGiIW9HmfuLdmcs6ajDQy0MLF0/P/eaDp7G9yAS\n\
mJABPgeG+qeHAKJ/O4+GpGYGWPDpUY8qe0L2cdWIZz2oIMCZzgLCJZwXAoGBAOZ3\n\
5+mRhKdsSD3wQAIxbrKdLgQNmfTAVl4IQF3lyMMsN0bYdegRR5ZODXmJ7/Hy+oSM\n\
mGgTo8rB3qOblyqvjM/nv6+jbMH3F3yzyg3BjQ1dcIy+S+fFsaat5LBnlNRV+Ac8\n\
gbKxEtoj3LT/FVzIps5Sbmea4Z1HQXrcd/pqxJxNAoGBAP2ttG0gZ4CFBGmuL110\n\
//m5d1Va5+cfsGXWFRgEWMTiJF6j0CJceX9VbWovLEHmdBjaG1pumLoK0z+DuVrM\n\
IJRy2WUP+cWl/1Zl85e2f1Xebb/lIWfcCH6hLtn2zhwU8fZFiyCxKUZMCdedIvUH\n\
VHs5Z9PhUibDwsZiA7zPMRpLAoGATlNX9PBotgG995bsGhK0vW1f0y7QMPchIyoI\n\
viC2/2XKj4BHagxdWP7D45d2fbMHYv7pWQ27r8/9m3rogDBTWeE4KzgOYUlZqR7t\n\
P4mVJ4KnGp4d6/IrMyuMOkupsBRbjBILPjCh6JMhkj3TA8qJrjsjnIBtxucNoPTG\n\
rcuVcE0CgYEAk8WrV3lamwYT4JF8fz/J6/ay7C9zZkLo7DMJkztfVSqh0jADhTN4\n\
FidEE6MI4qu3uBEklaN4Stbeftk65Yb9NpqoUQtfTkuyXA15UjUS6CwM4Wy7K7FP\n\
Do9Z2SC6zSsPv70WufmcaR9Y4VsU0VMjhIKSWS2aARg1HFxzXvqcKIg=\n\
-----END RSA PRIVATE KEY-----\n"};


#endif