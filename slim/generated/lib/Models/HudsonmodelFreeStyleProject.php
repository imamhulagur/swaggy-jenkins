<?php
/*
 * HudsonmodelFreeStyleProject
 */
namespace \Models;

/*
 * HudsonmodelFreeStyleProject
 */
class HudsonmodelFreeStyleProject {
    /* @var string $class  */
    private $class;
/* @var string $name  */
    private $name;
/* @var string $url  */
    private $url;
/* @var string $color  */
    private $color;
/* @var \\Models\HudsonmodelFreeStyleProjectactions[] $actions  */
    private $actions;
/* @var string $description  */
    private $description;
/* @var string $displayName  */
    private $displayName;
/* @var string $displayNameOrNull  */
    private $displayNameOrNull;
/* @var string $fullDisplayName  */
    private $fullDisplayName;
/* @var string $fullName  */
    private $fullName;
/* @var Bool $buildable  */
    private $buildable;
/* @var \\Models\HudsonmodelFreeStyleBuild[] $builds  */
    private $builds;
/* @var \\Models\HudsonmodelFreeStyleBuild $firstBuild  */
    private $firstBuild;
/* @var \\Models\HudsonmodelFreeStyleProjecthealthReport[] $healthReport  */
    private $healthReport;
/* @var Bool $inQueue  */
    private $inQueue;
/* @var Bool $keepDependencies  */
    private $keepDependencies;
/* @var \\Models\HudsonmodelFreeStyleBuild $lastBuild  */
    private $lastBuild;
/* @var \\Models\HudsonmodelFreeStyleBuild $lastCompletedBuild  */
    private $lastCompletedBuild;
/* @var string $lastFailedBuild  */
    private $lastFailedBuild;
/* @var \\Models\HudsonmodelFreeStyleBuild $lastStableBuild  */
    private $lastStableBuild;
/* @var \\Models\HudsonmodelFreeStyleBuild $lastSuccessfulBuild  */
    private $lastSuccessfulBuild;
/* @var string $lastUnstableBuild  */
    private $lastUnstableBuild;
/* @var string $lastUnsuccessfulBuild  */
    private $lastUnsuccessfulBuild;
/* @var int $nextBuildNumber  */
    private $nextBuildNumber;
/* @var string $queueItem  */
    private $queueItem;
/* @var Bool $concurrentBuild  */
    private $concurrentBuild;
/* @var \\Models\HudsonscmNullSCM $scm  */
    private $scm;
}
