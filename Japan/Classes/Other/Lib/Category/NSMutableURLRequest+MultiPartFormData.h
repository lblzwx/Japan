
#import <Foundation/Foundation.h>

@interface NSMutableURLRequest (MultiPartFormData)

/**
 PHP脚本上传文件错误信息列表
 
 UPLOAD_ERR_OK
    其值为 0，没有错误发生，文件上传成功。
 UPLOAD_ERR_INI_SIZE
    其值为 1，上传的文件超过了 php.ini 中 upload_max_filesize 选项限制的值。
 UPLOAD_ERR_FORM_SIZE
    其值为 2，上传文件的大小超过了 HTML 表单中 MAX_FILE_SIZE 选项指定的值。
 UPLOAD_ERR_PARTIAL
    其值为 3，文件只有部分被上传。
 UPLOAD_ERR_NO_FILE
    其值为 4，没有文件被上传。
 UPLOAD_ERR_NO_TMP_DIR
    其值为 6，找不到临时文件夹。PHP 4.3.10 和 PHP 5.0.3 引进。
 UPLOAD_ERR_CANT_WRITE
    其值为 7，文件写入失败。PHP 5.1.0 引进。

 参考地址：http://php.net/manual/zh/features.file-upload.errors.php
 */

/**
 *  POST上传文件的请求
 *
 *  @param url      上传文件URL
 *  @param fileName 保存在服务器的文件名
 *  @param filePath 本地上传路径
 *
 *  @return POST上传文件的请求
 */
+ (instancetype)requestWithUploadURL:(NSURL *)url uploadFileName:(NSString *)fileName localFilePath:(NSString *)filePath;

@end
