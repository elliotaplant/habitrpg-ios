//
//  HRPGFeedViewController.h
//  Habitica
//
//  Created by Phillip on 07/06/14.
//  Copyright (c) 2014 Phillip Thelen. All rights reserved.
//

#import "Food.h"
#import "HRPGBaseViewController.h"

@interface HRPGFeedViewController : HRPGBaseViewController<NSFetchedResultsControllerDelegate>

@property(strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property(nonatomic) Food *selectedFood;

@end
