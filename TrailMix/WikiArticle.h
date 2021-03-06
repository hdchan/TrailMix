//
//  WikiArticle.h
//  Compass Tool
//
//  Created by Henry Chan on 7/29/15.
//  Copyright (c) 2015 Henry Chan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <UIKit/UIKit.h>

@interface WikiArticle : NSObject

@property (nonatomic, strong) NSNumber *pageID;
@property (nonatomic, strong) NSString *title;
@property (nonatomic) CLLocationCoordinate2D coordinate;
@property (nonatomic) CLLocationDistance distance;
@property (nonatomic, strong) NSString *extract;
//@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSURL *imageURL;

- (instancetype) initWithPageID:(NSNumber*)pageID title:(NSString *)title coordinate:(CLLocationCoordinate2D)coordinate distance:(CLLocationDistance)distance;

@end
