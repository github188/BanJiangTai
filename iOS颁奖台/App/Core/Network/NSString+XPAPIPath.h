//
//  NSString+XPAPIPath.h
//  Huaban
//
//  Created by huangxinping on 4/24/15.
//  Copyright (c) 2015 iiseeuu.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#define XP_API_TEST 0 // 1-测试环境，0-正式环境
#if XP_API_TEST

#define XPAPIBaseURL @"http://test.banjiangtai.com:8080"


//#define XPAPIBaseURL @"http://192.168.111.222:8080"http://101.201.75.27:8080
//192.168.111.222
//101.200.132.60
//101.201.75.27
//123.57.184.94

//生产
//182.92.142.101
#else
#define XPAPIBaseURL @"http://app.banjiangtai.com:8090"
#endif

@interface NSString (XPAPIPath)

/**
 *  @brief  填充API基路径
 *
 *  @return API全路径
 */
- (NSString *)fillBaseAPIPath;

@end
