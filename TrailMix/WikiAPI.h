//
//  WikiAPI.h
//  Compass Tool
//
//  Created by Henry Chan on 7/29/15.
//  Copyright (c) 2015 Henry Chan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WikiArticle.h"

@interface WikiAPI : NSObject

+ (void) getArticlesAroundLocation:(CLLocationCoordinate2D)coordinate completion:(void(^)(NSArray*wikiArticles))completion;
+ (void) getArticleExtract:(NSNumber *)articleID completion:(void(^)(NSString *extract))completion;

@end
