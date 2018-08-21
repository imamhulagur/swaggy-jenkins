# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.PipelineBranchesitem do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"displayName",
    :"estimatedDurationInMillis",
    :"name",
    :"weatherScore",
    :"latestRun",
    :"organization",
    :"pullRequest",
    :"totalNumberOfPullRequests",
    :"_class"
  ]

  @type t :: %__MODULE__{
    :"displayName" => String.t,
    :"estimatedDurationInMillis" => integer(),
    :"name" => String.t,
    :"weatherScore" => integer(),
    :"latestRun" => PipelineBranchesitemlatestRun,
    :"organization" => String.t,
    :"pullRequest" => PipelineBranchesitempullRequest,
    :"totalNumberOfPullRequests" => integer(),
    :"_class" => String.t
  }
end

defimpl Poison.Decoder, for: SwaggyJenkins.Model.PipelineBranchesitem do
  import SwaggyJenkins.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"latestRun", :struct, SwaggyJenkins.Model.PipelineBranchesitemlatestRun, options)
    |> deserialize(:"pullRequest", :struct, SwaggyJenkins.Model.PipelineBranchesitempullRequest, options)
  end
end
