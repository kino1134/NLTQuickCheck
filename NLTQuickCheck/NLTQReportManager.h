//
//  NLTQReportManager.h
//  NLTQuickCheck
//
//  Created by KAZUMA Ukyo on 12/05/30.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NLTQReport.h"

@interface NLTQReportManager : NSObject
+ (id)reportManager;
- (void)clear;
- (void)addReport:(NLTQReport*)report;
- (void)addSuccessReport:(NLTQReport*)report;
- (void)addFailureReport:(NLTQReport*)report;
- (void)addExceptionReport:(NLTQReport*)report;
- (NSString*)stringFormat;
@end