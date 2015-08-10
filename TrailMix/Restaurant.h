//
//  Restaurant.h
//  TrailMix
//
//  Created by Mason Macias on 7/29/15.
//  Copyright (c) 2015 Team Fax Machine. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Restaurant : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *foodType;
@property (nonatomic, strong) NSString *latitude;
@property (nonatomic, strong) NSString *longitude;
@property (nonatomic, strong) NSString *venueId;
@property (nonatomic, strong) NSNumber *dollarSigns;
@property (nonatomic, strong) NSString *rating;

- (instancetype) initWithCuisineType:(NSString *)foodType
                             VenueId:(NSString *)venueId
                                Name:(NSString *)name
                            Latitude:(NSString *)latitude
                           Longitude:(NSString *)longitude
                         DollarSigns:(NSString *)dollarSigns
                              Rating:(NSString *)rating;

+ (instancetype)createRestaurantObject:(NSDictionary *)restaurantDictionary;

@end
