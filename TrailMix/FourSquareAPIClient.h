//
//  FourSquareAPIClient.h
//  TrailMix
//
//  Created by Mason Macias on 7/31/15.
//  Copyright (c) 2015 Team Fax Machine. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FourSquareAPIClient : NSObject

+(void)getNearbyRestaurantWithLatitude:(double)latitude
                             Longitude:(double)longitude
                                Radius:(double)radius
                       CompletionBlock:(void(^)(NSDictionary *cuisineDictionary))completionBlock;

+(NSString *)getCurrentDateForGetRequest;

@end