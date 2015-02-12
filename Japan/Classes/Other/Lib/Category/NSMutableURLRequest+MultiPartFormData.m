
#import "NSMutableURLRequest+MultiPartFormData.h"

#define kTimeoutInterval 30.0

static NSString *boundary = @"---------------------------4088148981151803933951107873";
/** 服务器上接收上传文件脚本中的字段名，可以后端程序员沟通获得，也可以使用firefox可以跟踪 */
static NSString *userfile = @"userfile";

@implementation NSMutableURLRequest (MultiPartFormData)

+ (instancetype)requestWithUploadURL:(NSURL *)url uploadFileName:(NSString *)fileName localFilePath:(NSString *)filePath
{
    NSMutableURLRequest *r = [[NSMutableURLRequest alloc] initWithURL:url cachePolicy:1 timeoutInterval:kTimeoutInterval];
    
    r.HTTPMethod = @"POST";
    
	NSString *contentType = [NSString stringWithFormat:@"multipart/form-data; boundary=%@", boundary];
    [r setValue:contentType forHTTPHeaderField:@"Content-Type"];
    
    NSMutableData *body = [NSMutableData data];
    
    [body appendData:[[NSString stringWithFormat:@"\r\n--%@\r\n", boundary] dataUsingEncoding:NSUTF8StringEncoding]];
    [body appendData:[[NSString stringWithFormat:@"Content-Disposition: form-data; name=\"%@\"; filename=\"%@\"\r\n", userfile, fileName] dataUsingEncoding:NSUTF8StringEncoding]];
    [body appendData:[@"Content-Type: application/octet-stream\r\n\r\n" dataUsingEncoding:NSUTF8StringEncoding]];
    
    [body appendData:[NSData dataWithContentsOfFile:filePath]];
    [body appendData:[[NSString stringWithFormat:@"\r\n--%@--\r\n", boundary] dataUsingEncoding:NSUTF8StringEncoding]];
    
    [r setHTTPBody:body];
    
    return r;
}

@end
